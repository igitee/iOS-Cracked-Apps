//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ITBOModel.h"

@class NSString, TBOTopic, UIButton, UILabel;

@interface TBOSearchTopicResultFooterView : UIView <ITBOModel>
{
    id _model;
    UILabel *_from;
    UIButton *_communityName;
    UIButton *_timeBtn;
    TBOTopic *_topic;
}

@property(retain, nonatomic) TBOTopic *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) UIButton *timeBtn; // @synthesize timeBtn=_timeBtn;
@property(retain, nonatomic) UIButton *communityName; // @synthesize communityName=_communityName;
@property(retain, nonatomic) UILabel *from; // @synthesize from=_from;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)goCommunity;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
