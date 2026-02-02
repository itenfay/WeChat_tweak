//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CSearchedContact
{
    unsigned int matchType;
    NSString *searchString;
}

+ (id)contactFromSearchContactResp:(id)arg1 Req:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString;
@property(nonatomic) unsigned int matchType; // @synthesize matchType;

@end

