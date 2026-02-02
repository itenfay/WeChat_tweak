//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAProfileRelatedInfo
{
    NSString *_title;
    NSString *_iconURL;
    NSString *_desc;
    NSString *_username;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithWeAppInfo:(id)arg1;
- (id)initWithBrandInfo:(id)arg1;

@end

