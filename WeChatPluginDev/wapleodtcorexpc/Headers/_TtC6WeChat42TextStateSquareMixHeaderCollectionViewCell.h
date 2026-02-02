//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, NSString, TextStateHistoryLogic, _TtC6WeChat20StatusSquareReporter;

@interface _TtC6WeChat42TextStateSquareMixHeaderCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *squareReporter;
    MISSING_TYPE *hostVC;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *historyModel;
    MISSING_TYPE *isViewLoaded;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *myStatusListInfo;
- (void)setMessageBoxInfo:(id)arg1;
@property(nonatomic) _Bool friendsHaveStatus;
@property(nonatomic) _Bool showPublishFailTip;
- (void)setOnUpdateHeightWithHandler:(CDUnknownBlockType)arg1;
- (void)setOnTapMessageBoxWithHandler:(CDUnknownBlockType)arg1;
- (void)setOnTapRepublishWithHandler:(CDUnknownBlockType)arg1;
- (void)setOnTapHistoryStatusWithHandelr:(CDUnknownBlockType)arg1;
@property(nonatomic, copy) CDUnknownBlockType onTapPublishHandler;
@property(nonatomic, copy) CDUnknownBlockType onTapMoreHandler;
- (void)didMoveToWindow;
- (void)updateDataWithAnimated:(_Bool)arg1;
@property(nonatomic, readonly) double prefferedHeidht;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) TextStateHistoryLogic *historyModel; // @synthesize historyModel;
@property(nonatomic, retain) _TtC6WeChat20StatusSquareReporter *squareReporter; // @synthesize squareReporter;
- (void)onTextStateUpdateForUserName:(id)arg1;

@end

