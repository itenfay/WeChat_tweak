//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface UploadFileRecord : NSObject
{
    unsigned int _type;
    NSString *_weburl;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *weburl; // @synthesize weburl=_weburl;

@end

