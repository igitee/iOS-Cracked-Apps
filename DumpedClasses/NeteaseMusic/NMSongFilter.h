//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMSongFilter : NSObject
{
}

+ (void)getFilteredCopyrightAvailableSongs:(id)arg1 collection:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3 action:(unsigned long long)arg4;
+ (void)getFilteredCopyrightAvailableSongsForShare:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
+ (void)getFilteredCopyrightAvailableSongsForSubscribe:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
+ (void)getFilteredCopyrightAvailableSongsForDownload:(id)arg1 collection:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
+ (void)getFilteredCopyrightAvailableSongsForPlay:(id)arg1 collection:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;

@end

