//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZUploadRespPacket.h"

@class NSMutableDictionary, NSString;

@interface QZUploadQunUppInfoResp : QZUploadRespPacket
{
    NSString *_url;
    NSString *_photoId;
    NSMutableDictionary *_mapSpeceInfo;
}

- (void).cxx_destruct;
- (void)decodeBody_OC:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *mapSpeceInfo; // @dynamic mapSpeceInfo;
@property(retain, nonatomic) NSString *photoId; // @dynamic photoId;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

