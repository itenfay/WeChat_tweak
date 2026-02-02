//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface NavigateItem
{
    struct CLLocationCoordinate2D _coordinate;
    NSString *_name;
    _Bool _isNameOnly;
    NSString *_poiId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNameOnly; // @synthesize isNameOnly=_isNameOnly;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

@end

