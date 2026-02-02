//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface DirectionsRequestItem
{
    _Bool useGoogleApi;
    struct CLLocationCoordinate2D begin;
    struct CLLocationCoordinate2D end;
}

@property(nonatomic) _Bool useGoogleApi; // @synthesize useGoogleApi;
@property(nonatomic) struct CLLocationCoordinate2D end; // @synthesize end;
@property(nonatomic) struct CLLocationCoordinate2D begin; // @synthesize begin;

@end

