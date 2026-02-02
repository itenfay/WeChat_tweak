//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UILabel;

@interface MMFinderFeedStreamSatisfactionQuestView : UIView
{
    CDUnknownBlockType _onSelectQuestWording;
    NSArray *_quests;
    UILabel *_titleLabel;
    UIView *_wordingContainer;
    NSMutableArray *_wordingViews;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *wordingViews; // @synthesize wordingViews=_wordingViews;
@property(retain, nonatomic) UIView *wordingContainer; // @synthesize wordingContainer=_wordingContainer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *quests; // @synthesize quests=_quests;
@property(copy, nonatomic) CDUnknownBlockType onSelectQuestWording; // @synthesize onSelectQuestWording=_onSelectQuestWording;
- (id)createWordingView:(id)arg1;
- (void)updateWithQuests:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

