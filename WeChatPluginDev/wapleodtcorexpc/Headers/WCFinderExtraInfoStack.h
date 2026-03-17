//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSDictionary, NSMutableArray, NSString;

@interface WCFinderExtraInfoStack : NSObject
{
    NSString *_jsonValue;
    NSDictionary *_dictValue;
    NSMutableArray *_appendedInfos;
}

@property(retain, nonatomic) NSMutableArray *appendedInfos; // @synthesize appendedInfos=_appendedInfos;
@property(retain, nonatomic) NSDictionary *dictValue; // @synthesize dictValue=_dictValue;
@property(retain, nonatomic) NSString *jsonValue; // @synthesize jsonValue=_jsonValue;
- (void)iterAllTokens:(CDUnknownBlockType)arg1;
- (id)insertExtraInfo:(id)arg1;
- (id)mapInfoDict;
- (void)flush;

@end
