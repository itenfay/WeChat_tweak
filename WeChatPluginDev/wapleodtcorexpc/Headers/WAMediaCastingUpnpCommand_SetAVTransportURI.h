//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAMediaCastingUpnpCommand_SetAVTransportURI
{
    NSString *_uri;
}

+ (id)commandWithURI:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (id)commandXMLBodyString;
- (id)initWithURI:(id)arg1;

@end

