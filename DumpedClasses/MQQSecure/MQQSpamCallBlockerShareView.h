//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQQButton, UIImageView, UILabel;

@interface MQQSpamCallBlockerShareView : UIView
{
    MQQButton *_shareButton;
    UIImageView *_explodeImageView;
    UIView *_contentView;
    UILabel *_nameLabel;
    UIImageView *_bg1ImageView;
    UIImageView *_bg2ImageView;
    UIImageView *_bg3ImageView;
    UILabel *_rankLabel;
    UILabel *_subContentLabel;
    UILabel *_adContentLabel;
    UIImageView *_avatarHolderImageView;
    UIView *_animationView;
    UIImageView *_avatarImageView;
    long long _shareType;
}

@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIImageView *avatarHolderImageView; // @synthesize avatarHolderImageView=_avatarHolderImageView;
@property(retain, nonatomic) UILabel *adContentLabel; // @synthesize adContentLabel=_adContentLabel;
@property(retain, nonatomic) UILabel *subContentLabel; // @synthesize subContentLabel=_subContentLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIImageView *bg3ImageView; // @synthesize bg3ImageView=_bg3ImageView;
@property(retain, nonatomic) UIImageView *bg2ImageView; // @synthesize bg2ImageView=_bg2ImageView;
@property(retain, nonatomic) UIImageView *bg1ImageView; // @synthesize bg1ImageView=_bg1ImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *explodeImageView; // @synthesize explodeImageView=_explodeImageView;
@property(retain, nonatomic) MQQButton *shareButton; // @synthesize shareButton=_shareButton;
- (void)dealloc;
- (id)rotationAnimationWithDurationTime:(double)arg1;
- (void)startAnimation;
- (void)updateUserAvatar:(id)arg1;
- (void)updateUserName:(id)arg1 rankNumber:(long long)arg2 userAvatar:(id)arg3;
- (void)addExplodeAnimationImageView;
- (id)initWithFrame:(struct CGRect)arg1 shareType:(long long)arg2;

@end

