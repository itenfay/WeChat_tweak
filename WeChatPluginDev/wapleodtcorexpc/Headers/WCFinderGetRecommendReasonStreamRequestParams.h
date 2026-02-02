//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClientStatus, NSData, NSString;

@interface WCFinderGetRecommendReasonStreamRequestParams : NSObject
{
    int _commentScene;
    int _prefetchType;
    NSString *_bypassData;
    NSData *_lastBuffer;
    FinderClientStatus *_clientStatus;
}

- (void).cxx_destruct;
@property(nonatomic) int prefetchType; // @synthesize prefetchType=_prefetchType;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *bypassData; // @synthesize bypassData=_bypassData;

@end

