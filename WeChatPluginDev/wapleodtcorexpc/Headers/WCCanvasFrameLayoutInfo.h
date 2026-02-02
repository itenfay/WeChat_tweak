//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCCanvasFrameLayoutInfo : NSObject
{
    unsigned int _cornerRadius;
    NSArray *_layoutItems;
}

@property(nonatomic) unsigned int cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSArray *layoutItems; // @synthesize layoutItems=_layoutItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

