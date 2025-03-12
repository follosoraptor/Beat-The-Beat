# -*- coding: utf-8 -*-
"""
Beat the Beat!: Sound System Module v1

@author: Samantha DuBois and Sasha Folloso
"""

# Libraries
from pygame import mixer

# Functions
def loadSong(song_file:str):
    """Initializes audio mixer and loads in music file."""
    song = song_file
    mixer.init()
    mixer.music.load(song_file)
    
def playSong():
    """Plays loaded song file."""
    mixer.music.play()
    
def stopSong():
    """Stops the currently playing song."""
    mixer.music.stop()

def main():
    loadSong("btb_test_audio.mp3")
    playSong()
    input("Press enter to stop music playback!")
    stopSong()

# Main Program
if __name__ == '__main__':
    main()
