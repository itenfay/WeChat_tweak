//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardOperationRegion
{
    unsigned int _type;
    unsigned int _endTime;
    NSString *_text;
    NSString *_url;
    NSString *_thumbUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)operationAvalid;

@end

