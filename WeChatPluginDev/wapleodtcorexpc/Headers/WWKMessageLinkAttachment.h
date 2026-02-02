//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WWKMessageLinkAttachment
{
    NSString *_title;
    NSString *_summary;
    NSString *_url;
    NSString *_iconurl;
    NSData *_icon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

