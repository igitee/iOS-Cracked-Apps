//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class UILabel;

@interface TBOsearchCommunityForEditCell : TBOBaseCell
{
    UILabel *_communityName;
    UILabel *_peopleNum;
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
@property(retain, nonatomic) UILabel *peopleNum; // @synthesize peopleNum=_peopleNum;
@property(retain, nonatomic) UILabel *communityName; // @synthesize communityName=_communityName;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
