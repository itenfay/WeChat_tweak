//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveFloatMsgDecorationItem : NSObject
{
    unsigned int _type;
    NSString *_url;
    NSString *_localFileUrl;
}

+ (id)itemFromFreeMsgConfig:(id)arg1;
+ (id)itemFromPBDecoration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localFileUrl; // @synthesize localFileUrl=_localFileUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

