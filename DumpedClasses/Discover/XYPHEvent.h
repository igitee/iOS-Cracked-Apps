//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHEvent : XYRKModel
{
    NSString *_ID;
    NSString *_title;
    NSString *_descriptionString;
    NSString *_images;
    NSString *_link;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

