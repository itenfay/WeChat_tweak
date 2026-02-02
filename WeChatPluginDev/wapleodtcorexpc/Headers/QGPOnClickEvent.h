//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface QGPOnClickEvent
{
    NSArray *_clickedPosition;
    NSString *_identifier;
    NSString *_name;
}

+ (id)instanceWithClickedPosition:(id)arg1 identifier:(id)arg2 name:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *clickedPosition; // @synthesize clickedPosition=_clickedPosition;

@end

