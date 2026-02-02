//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, UIImageView, UILabel;

@interface CLMProcessHalfScreenView
{
    CDUnknownBlockType _deleteLogic;
    unsigned long long _dataSize;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UILabel *_linkLabel;
    MMUIActivityIndicatorView *_loadingView;
    UIImageView *_finishIconView;
    NSString *_processTitle;
    NSString *_processTip;
    NSString *_stopActionName;
    NSString *_finishTitle;
    NSString *_finishTip;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *finishTip; // @synthesize finishTip=_finishTip;
@property(copy, nonatomic) NSString *finishTitle; // @synthesize finishTitle=_finishTitle;
@property(copy, nonatomic) NSString *stopActionName; // @synthesize stopActionName=_stopActionName;
@property(copy, nonatomic) NSString *processTip; // @synthesize processTip=_processTip;
@property(copy, nonatomic) NSString *processTitle; // @synthesize processTitle=_processTitle;
@property(retain, nonatomic) UIImageView *finishIconView; // @synthesize finishIconView=_finishIconView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(copy, nonatomic) CDUnknownBlockType deleteLogic; // @synthesize deleteLogic=_deleteLogic;
- (void)onTapStopDeleteButton;
- (void)setupDetailView;
- (void)updateView;
- (id)p_getTipAttributeString:(id)arg1;
- (id)p_getTitleAttributeString:(id)arg1;
- (void)onChatLogDataDeleteProgress:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onChatLogDataReloadItem;
- (void)startDeleteLogic;
- (id)initWithDataSize:(unsigned long long)arg1 deleteLogic:(CDUnknownBlockType)arg2 processTitle:(id)arg3 processTip:(id)arg4 stopActionName:(id)arg5 finishTitle:(id)arg6 finishTip:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

