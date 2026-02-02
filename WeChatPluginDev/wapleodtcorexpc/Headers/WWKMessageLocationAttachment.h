//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WWKMessageLocationAttachment
{
    NSString *_title;
    NSString *_address;
    double _lat;
    double _lng;
    double _zoom;
}

- (void).cxx_destruct;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

