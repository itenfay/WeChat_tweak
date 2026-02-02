//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCDevice;

@interface WCDeviceOperTicketExt
{
    WCDevice *_device;
    unsigned int _operType;
    NSString *_ticket;
    JSEvent *_callBackEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *callBackEvent; // @synthesize callBackEvent=_callBackEvent;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) unsigned int operType; // @synthesize operType=_operType;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;

@end

