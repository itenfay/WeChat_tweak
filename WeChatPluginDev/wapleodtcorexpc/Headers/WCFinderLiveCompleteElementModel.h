//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexPath, WCFinderDataItem;

@interface WCFinderLiveCompleteElementModel : NSObject
{
    WCFinderDataItem *_dataItem;
    NSIndexPath *_indexPath;
}

+ (id)finderLiveStreamElementModelFrom:(id)arg1 indexPath:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)resetExposeSession;
- (void)setAutoPlayTime:(unsigned int)arg1;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayStartTs:(unsigned long long)arg1;
- (unsigned long long)getAutoPlayStartTs;
- (void)setExposeValidRatioTime:(unsigned int)arg1;
- (unsigned int)getExposeValidRatioTime;
- (void)setExposeValidRatioStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioStartTs;
- (void)setExposeValidRatioFirstStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioFirstStartTs;
- (void)setExposeStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeStartTs;

@end

