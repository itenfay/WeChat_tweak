//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface QBarCodeView
{
    int _width;
    int _height;
    struct vector<unsigned char, std::allocator<unsigned char>> _data;
    _Bool _bTwoDimensional;
    _Bool _disableDefaultAccessibility;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableDefaultAccessibility; // @synthesize disableDefaultAccessibility=_disableDefaultAccessibility;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayQBarCode:(struct QBAR_IMAGE)arg1 TwoDimensional:(_Bool)arg2;

@end

