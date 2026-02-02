//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderExtendedReading, FinderJumpInfo;

@interface WCFinderExtReadingInfoModel : NSObject
{
    _Bool _isFromDraft;
    _Bool _linkIsFromPasteBoard;
    int _htmlShowStyle;
    FinderExtendedReading *_extReading;
    FinderJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) int htmlShowStyle; // @synthesize htmlShowStyle=_htmlShowStyle;
@property(nonatomic) _Bool linkIsFromPasteBoard; // @synthesize linkIsFromPasteBoard=_linkIsFromPasteBoard;
@property(nonatomic) _Bool isFromDraft; // @synthesize isFromDraft=_isFromDraft;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @synthesize extReading=_extReading;
@property(nonatomic) long long style;
@property(nonatomic) unsigned long long type;
- (id)init;
- (id)initWithPBReadingInfo:(id)arg1;

@end

