//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderFoldFeedReportInfo : NSObject
{
    NSString *_tid;
    NSString *_userName;
    unsigned long long _foldFeedCount;
    NSMutableArray *_foldDetailInfos;
    unsigned long long _topButtonFirstClickTimeStamp;
    unsigned long long _moreButtonFirstClickTimeStamp;
}

+ (id)infoWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long moreButtonFirstClickTimeStamp; // @synthesize moreButtonFirstClickTimeStamp=_moreButtonFirstClickTimeStamp;
@property(nonatomic) unsigned long long topButtonFirstClickTimeStamp; // @synthesize topButtonFirstClickTimeStamp=_topButtonFirstClickTimeStamp;
@property(retain, nonatomic) NSMutableArray *foldDetailInfos; // @synthesize foldDetailInfos=_foldDetailInfos;
@property(nonatomic) unsigned long long foldFeedCount; // @synthesize foldFeedCount=_foldFeedCount;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)initWithDataItem:(id)arg1;

@end

