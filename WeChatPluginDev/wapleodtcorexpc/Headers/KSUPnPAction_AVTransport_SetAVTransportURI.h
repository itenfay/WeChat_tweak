//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KSUPnPAction_AVTransport_SetAVTransportURI
{
    NSString *_transportURI;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *transportURI; // @synthesize transportURI=_transportURI;
- (id)generateXMLForActionArguments;
- (id)actionName;

@end

