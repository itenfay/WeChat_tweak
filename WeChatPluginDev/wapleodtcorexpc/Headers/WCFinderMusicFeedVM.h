//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem, WCFinderFeedContentVM, WCFinderFeedMediaWrap;

@interface WCFinderMusicFeedVM : NSObject
{
    _Bool _showMVIcon;
    _Bool _couldDelete;
    _Bool _couldSlidDelete;
    _Bool _couldRetry;
    _Bool _isTransfering;
    _Bool _showViwer;
    _Bool _showProgress;
    _Bool _enabled;
    WCFinderFeedContentVM *_contentVM;
    long long _status;
    long long _viewerCount;
    long long _likeCount;
    NSString *_title;
    long long _titleLineNumber;
    NSString *_author;
    NSString *_descString;
    NSString *_accessibilityDescString;
    NSString *_timeString;
    NSString *_typeString;
    long long _cellAlignStyle;
    long long _style;
}

+ (id)feedVMWithContentVM:(id)arg1 style:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
@property(nonatomic) _Bool showViwer; // @synthesize showViwer=_showViwer;
@property(nonatomic) _Bool isTransfering; // @synthesize isTransfering=_isTransfering;
@property(nonatomic) _Bool couldRetry; // @synthesize couldRetry=_couldRetry;
@property(nonatomic) _Bool couldSlidDelete; // @synthesize couldSlidDelete=_couldSlidDelete;
@property(nonatomic) _Bool couldDelete; // @synthesize couldDelete=_couldDelete;
@property(nonatomic) long long cellAlignStyle; // @synthesize cellAlignStyle=_cellAlignStyle;
@property(nonatomic) _Bool showMVIcon; // @synthesize showMVIcon=_showMVIcon;
@property(retain, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSString *accessibilityDescString; // @synthesize accessibilityDescString=_accessibilityDescString;
@property(retain, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) long long titleLineNumber; // @synthesize titleLineNumber=_titleLineNumber;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) long long viewerCount; // @synthesize viewerCount=_viewerCount;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (id)defaultIconWithSize:(struct CGSize *)arg1;
- (id)description;
- (id)exposeId;
- (long long)exposeDeleteElement;
@property(readonly, nonatomic) NSString *coverUrl;
@property(readonly, nonatomic) WCFinderFeedMediaWrap *coverMediaWrap;
- (id)accessibilityLabel;
- (id)formatTimeString:(double)arg1;
- (long long)compareTime:(id)arg1;
@property(readonly, nonatomic) WCFinderDataItem *dataItem;
@property(readonly, nonatomic) double uploadProgress;
@property(readonly, nonatomic) NSString *observeKey;
- (void)_updateCommonFields;
- (void)updateMVStatus;
- (void)updateDraftStatus;
- (void)updateStatus;
- (void)updateDataItem:(id)arg1;
- (id)init;

@end

