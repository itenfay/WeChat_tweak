//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface MJSpeechCloneResult
{
    NSString *_roleID;
    NSDictionary *_extraInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraInfos; // @synthesize extraInfos=_extraInfos;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
- (id)description;
- (id)initWithRoleID:(id)arg1 extraInfos:(id)arg2;

@end

