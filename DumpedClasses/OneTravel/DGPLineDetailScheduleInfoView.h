//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UILabel;

@interface DGPLineDetailScheduleInfoView : UIView
{
    NSArray *_workdayArray;
    NSArray *_holidayArray;
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    UILabel *_firstDesLabel;
    UILabel *_secondDesLabel;
}

@property(retain, nonatomic) UILabel *secondDesLabel; // @synthesize secondDesLabel=_secondDesLabel;
@property(retain, nonatomic) UILabel *firstDesLabel; // @synthesize firstDesLabel=_firstDesLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) NSArray *holidayArray; // @synthesize holidayArray=_holidayArray;
@property(retain, nonatomic) NSArray *workdayArray; // @synthesize workdayArray=_workdayArray;
- (void).cxx_destruct;
- (id)textAttributeDitionary:(id)arg1 font:(id)arg2 lineSpace:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withScheduleModel:(id)arg2;

@end

