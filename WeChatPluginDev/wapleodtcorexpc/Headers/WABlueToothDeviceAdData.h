//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSDictionary, NSString;

@interface WABlueToothDeviceAdData
{
    _Bool _isConnectable;
    NSString *_localName;
    NSData *_manufacturerData;
    NSArray *_serviceUUIDs;
    NSDictionary *_serviceData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isConnectable; // @synthesize isConnectable=_isConnectable;
@property(retain, nonatomic) NSDictionary *serviceData; // @synthesize serviceData=_serviceData;
@property(retain, nonatomic) NSArray *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property(retain, nonatomic) NSData *manufacturerData; // @synthesize manufacturerData=_manufacturerData;
@property(copy, nonatomic) NSString *localName; // @synthesize localName=_localName;

@end

