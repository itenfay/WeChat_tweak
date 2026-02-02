//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableData, NSString;

@interface GCDWebServerDataRequest
{
    NSMutableData *_data;
    NSString *_text;
    id _jsonObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
- (_Bool)close:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (_Bool)open:(id *)arg1;
@property(readonly, nonatomic) id jsonObject;
@property(readonly, nonatomic) NSString *text;

@end

