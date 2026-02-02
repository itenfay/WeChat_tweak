//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface FTSMsgSessionResultItem : NSObject
{
    _Bool _hasCheck;
    _Bool _isInvalid;
    NSString *_username;
    NSArray *_arrMsgItem;
    NSMutableArray *_clusterResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clusterResults; // @synthesize clusterResults=_clusterResults;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) _Bool hasCheck; // @synthesize hasCheck=_hasCheck;
@property(retain, nonatomic) NSArray *arrMsgItem; // @synthesize arrMsgItem=_arrMsgItem;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

