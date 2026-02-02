//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJMusicInfo;

@interface WCVideoProducerMusicCellViewModel : NSObject
{
    _Bool isLoadMoreCell;
    _Bool _isSelected;
    _Bool _shouldShowLyrics;
    unsigned long long initialStateForLoadMoreCell;
    OMJMusicInfo *_oMJMusicInfo;
    long long _cellOrder;
    NSString *_musicUrlPath;
    long long _musicClipStartTimeMS;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowLyrics; // @synthesize shouldShowLyrics=_shouldShowLyrics;
@property(nonatomic) long long musicClipStartTimeMS; // @synthesize musicClipStartTimeMS=_musicClipStartTimeMS;
@property(copy, nonatomic) NSString *musicUrlPath; // @synthesize musicUrlPath=_musicUrlPath;
@property(nonatomic) long long cellOrder; // @synthesize cellOrder=_cellOrder;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) OMJMusicInfo *oMJMusicInfo; // @synthesize oMJMusicInfo=_oMJMusicInfo;
@property(nonatomic) _Bool isLoadMoreCell; // @synthesize isLoadMoreCell;
@property(nonatomic) unsigned long long initialStateForLoadMoreCell; // @synthesize initialStateForLoadMoreCell;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)bindByCellView:(id)arg1;
- (id)initWithOMJMusicInfo:(id)arg1;
- (unsigned long long)musicType;
@property(readonly, copy) NSString *description;
- (id)musicUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

