//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface WeAppGameJoinTeamDescView : UIView
{
    MMUILabel *_scoreLable;
    MMUILabel *_additionLabel;
    MMUILabel *_memberLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *memberLabel; // @synthesize memberLabel=_memberLabel;
@property(retain, nonatomic) MMUILabel *additionLabel; // @synthesize additionLabel=_additionLabel;
@property(retain, nonatomic) MMUILabel *scoreLable; // @synthesize scoreLable=_scoreLable;
- (id)getMemberDesc;
- (id)getTeamupDesc;
- (id)getTitle;
- (void)layoutUI;
- (void)initUI:(id)arg1;
- (id)initWithParmas:(id)arg1;

@end

