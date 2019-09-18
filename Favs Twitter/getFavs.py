import tweepy
import os 

# Authenticate to Twitter
auth = tweepy.OAuthHandler("DBGfx06JhgdnZEpUmp4M0LdbI","VafjDgXKpgCbSDGDcK3CwrzNWAVP2fSWYJ3l3HWz2iQd1oks5U")
auth.set_access_token("2942547615-HgyBBw9R8fNdz3djvNsYjbGynUpzLymlhHEZtJt","SIEMQqzg8adu708fMoMxV4Rue5yZf6TNwM6ky13Ob2SDW")

api = tweepy.API(auth)

try:
    api.verify_credentials()
    print("Authentication OK")
except:
    print("Error during authentication")

tweet = api.get_status("1171507883533426693") #obtiene el tweet del anuncio del IPhone 11

favs=  tweet.favorite_count #obtiene la cantidad de likes del tweet

numberCast = str(favs)

print numberCast

##Archivos de texto 

file = open("/home/pi/Desktop/Favs/favCount.txt", "w")
file.write(numberCast + os.linesep)
file.close()
