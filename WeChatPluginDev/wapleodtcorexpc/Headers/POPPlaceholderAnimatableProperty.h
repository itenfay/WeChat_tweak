//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface POPPlaceholderAnimatableProperty
{
    NSString *name;
    CDUnknownBlockType readBlock;
    CDUnknownBlockType writeBlock;
    double threshold;
}

- (void).cxx_destruct;
- (double)threshold;
- (CDUnknownBlockType)writeBlock;
- (CDUnknownBlockType)readBlock;
- (id)name;

@end

