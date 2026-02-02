//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WWKBaseResp
{
    int _errCode;
    NSString *_errStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errStr; // @synthesize errStr=_errStr;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;

@end

