//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAddressStageDataStruct;

@interface POIAddressDataPickerItem
{
    WCAddressStageDataStruct *_addressData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAddressStageDataStruct *addressData; // @synthesize addressData=_addressData;
- (id)displayStr;
- (id)initWithAddressData:(id)arg1;

@end

