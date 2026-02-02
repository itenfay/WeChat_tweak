//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TingItem;

@interface BTAudioItemCellViewModel
{
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(readonly, nonatomic) TingItem *tingItem;
- (id)coverImgURL;
@property(readonly, nonatomic) NSString *timeStr;
- (struct CGSize)titleSize;
- (id)titleLabelStyles;
- (double)titleMaxWidth;
- (_Bool)exposeDigest;
- (unsigned long long)digestLineNumber;
@property(readonly, nonatomic) struct CGSize containViewSize;
- (double)viewHeight;
- (id)itemViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

