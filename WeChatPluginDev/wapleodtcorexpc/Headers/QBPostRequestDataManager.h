//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QBPostRequestDataManager : NSObject
{
    NSMutableDictionary *_dicData;
}

+ (id)appendBodyForRequest:(id)arg1 originURLString:(id *)arg2;
+ (void)setHTTPBodyElementStream:(id)arg1 forRequest:(id)arg2;
+ (void)setHTTPBodyElementData:(id)arg1 forRequest:(id)arg2;
+ (id)sharedInstance;
@property(retain) NSMutableDictionary *dicData; // @synthesize dicData=_dicData;
- (void).cxx_destruct;
- (void)removeAllPostData;
- (id)arrayFromKey:(id)arg1;
- (id)arrayFromContainerWithKey:(id)arg1;
- (void)removeFirstDataForURLString:(id)arg1;
- (void)fillElement:(id)arg1 forRandomString:(long long)arg2 URLString:(id)arg3;
- (id)postDataElementForURLString:(id)arg1;
- (void)addPostDataElement:(id)arg1 forURLString:(id)arg2 mainURLString:(id)arg3;
- (id)init;

@end

