//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTaskId, NSMutableArray, NSString;

@interface MMLiveGiftPAGOverlay : UIView
{
    MMLiveTaskId *_taskId;
    NSMutableArray *_tagLabelList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tagLabelList; // @synthesize tagLabelList=_tagLabelList;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onGiftPAGViewDisappear:(id)arg1 taskId:(id)arg2;
- (void)onGiftPAGViewDisplay:(id)arg1 content:(id)arg2 taskId:(id)arg3;
- (id)getTagLabelWithTagName:(id)arg1 createIfNotExist:(_Bool)arg2;
- (id)createTagLabel;
- (void)layoutTagLabelList;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

