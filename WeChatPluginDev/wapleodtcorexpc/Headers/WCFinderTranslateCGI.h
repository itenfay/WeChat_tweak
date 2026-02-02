//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableDictionary;

@interface WCFinderTranslateCGI
{
    NSArray *_translateInfoArray;
    NSMutableDictionary *_keyMap;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSMutableDictionary *keyMap; // @synthesize keyMap=_keyMap;
@property(copy, nonatomic) NSArray *translateInfoArray; // @synthesize translateInfoArray=_translateInfoArray;
- (unsigned int)_clientIDForId:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)initWithTranslateInfos:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

