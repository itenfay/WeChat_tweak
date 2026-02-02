//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebViewHandOffItem
{
    NSString *_url;
    NSString *_icon;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

