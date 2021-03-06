//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSDictionary, NSString;

@interface FXSRechargeActiv : FXBaseJSONModel
{
    int _id;
    int _actionType;
    int _jumpPageType;
    int _jumpSubPage;
    NSString *_title;
    NSString *_pic;
    NSDictionary *_jumpParams;
    NSString *_link;
}

@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSDictionary *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(nonatomic) int jumpSubPage; // @synthesize jumpSubPage=_jumpSubPage;
@property(nonatomic) int jumpPageType; // @synthesize jumpPageType=_jumpPageType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

