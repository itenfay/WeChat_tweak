//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderDataItem, WCFinderFeedContentVM;

@interface WCFinderSearchHighLightItemModel : NSObject
{
    _Bool _isHidePostTimeLabel;
    WCFinderFeedContentVM *_contentVM;
    NSString *_normalNickName;
    NSMutableArray *_nameHightkeywords;
    NSString *_normalText;
    NSMutableArray *_textHightkeywords;
    struct CGSize _heightCache;
}

+ (id)getHighlightTextInContent:(id)arg1 searchText:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHidePostTimeLabel; // @synthesize isHidePostTimeLabel=_isHidePostTimeLabel;
@property(retain, nonatomic) NSMutableArray *textHightkeywords; // @synthesize textHightkeywords=_textHightkeywords;
@property(retain, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(retain, nonatomic) NSMutableArray *nameHightkeywords; // @synthesize nameHightkeywords=_nameHightkeywords;
@property(retain, nonatomic) NSString *normalNickName; // @synthesize normalNickName=_normalNickName;
@property(nonatomic) struct CGSize heightCache; // @synthesize heightCache=_heightCache;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)processNickname:(id)arg1 normalText:(id)arg2 searchText:(id)arg3;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)cancelDownloadImage;
- (void)generalStartDownloadImagePriority:(_Bool)arg1 maxCount:(unsigned long long)arg2 onlyThumb:(_Bool)arg3;
- (void)startDownloadStreamImagePriority:(_Bool)arg1;
- (void)startDownloadStreamImageImmediately;
- (_Bool)isFeedContainVideo;
- (_Bool)isFeedContainPhoto;
- (_Bool)existMediaContent;
- (_Bool)isFeedContainText;
- (void)processHeightText;
- (void)processHeightName;
@property(readonly, nonatomic) WCFinderDataItem *dataItem;
- (id)initWithSearchContentVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

