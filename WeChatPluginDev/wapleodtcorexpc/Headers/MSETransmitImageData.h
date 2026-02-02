//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MSETransmitImageData
{
    NSMutableArray *_selectedImageUrls;
}

+ (void)initialize;
+ (void)PBArrayAdd_selectedImageUrls;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedImageUrls; // @synthesize selectedImageUrls=_selectedImageUrls;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

