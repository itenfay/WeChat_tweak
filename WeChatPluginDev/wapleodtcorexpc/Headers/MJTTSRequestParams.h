//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MJTTSRequestParams
{
    NSString *_text;
    NSString *_roleID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (id)initWithText:(id)arg1 roleID:(id)arg2;

@end

