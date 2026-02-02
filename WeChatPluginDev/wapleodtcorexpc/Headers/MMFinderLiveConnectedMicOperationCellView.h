//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIView;

@interface MMFinderLiveConnectedMicOperationCellView : UITableViewCell
{
    CDUnknownBlockType _quitActionBlock;
    CDUnknownBlockType _pkActionBlock;
    UIButton *_quitBtn;
    UIButton *_pkBtn;
    UIView *_splitLine;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIButton *pkBtn; // @synthesize pkBtn=_pkBtn;
@property(retain, nonatomic) UIButton *quitBtn; // @synthesize quitBtn=_quitBtn;
@property(copy, nonatomic) CDUnknownBlockType pkActionBlock; // @synthesize pkActionBlock=_pkActionBlock;
@property(copy, nonatomic) CDUnknownBlockType quitActionBlock; // @synthesize quitActionBlock=_quitActionBlock;
- (void)layoutSubviews;
- (void)onPk:(id)arg1;
- (void)onQuitMic:(id)arg1;
@property(nonatomic) _Bool showQuitButton;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

