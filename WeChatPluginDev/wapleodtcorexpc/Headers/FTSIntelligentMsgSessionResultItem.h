//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface FTSIntelligentMsgSessionResultItem : NSObject
{
    _Bool _hasCheck;
    _Bool _isInvalid;
    unsigned int _searchResultCount;
    NSString *_username;
    NSArray *_arrMsgItem;
    NSArray *_arrFaceClusterItem;
    NSMutableArray *_clusterResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clusterResults; // @synthesize clusterResults=_clusterResults;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) _Bool hasCheck; // @synthesize hasCheck=_hasCheck;
@property(nonatomic) unsigned int searchResultCount; // @synthesize searchResultCount=_searchResultCount;
@property(retain, nonatomic) NSArray *arrFaceClusterItem; // @synthesize arrFaceClusterItem=_arrFaceClusterItem;
@property(retain, nonatomic) NSArray *arrMsgItem; // @synthesize arrMsgItem=_arrMsgItem;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

