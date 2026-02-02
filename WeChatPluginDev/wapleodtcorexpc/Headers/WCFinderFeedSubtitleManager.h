//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderFeedSubtitleManager : NSObject
{
    NSMutableDictionary *_subtitleViewModelDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *subtitleViewModelDict; // @synthesize subtitleViewModelDict=_subtitleViewModelDict;
- (void)clearAll;
- (id)subtitleViewModelWithTid:(id)arg1;

@end

