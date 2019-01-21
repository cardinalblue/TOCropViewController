//
//  Toolbar.h
//  TOCropViewControllerExample
//
//  Created by Simon Lee on 1/18/19.
//  Copyright © 2019 Tim Oliver. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN
@protocol Toolbar <NSObject>
/* In horizontal mode, offsets all of the buttons vertically by height of status bar. */
@property (nonatomic, assign) CGFloat statusBarHeightInset;
@property (nonatomic, assign) CGFloat preferredToolbarHeight;

/* Set an inset that will expand the background view beyond the bounds. */
@property (nonatomic, assign) UIEdgeInsets backgroundViewOutsets;

/* The 'Done' buttons to commit the crop. The text button is displayed
 in portrait mode and the icon one, in landscape. */
@property (nonnull, nonatomic, strong, readonly) UIButton *doneTextButton;
@property (nonnull, nonatomic, strong, readonly) UIButton *doneIconButton;
@property (nonnull, nonatomic, copy) NSString *doneTextButtonTitle;


/* The 'Cancel' buttons to cancel the crop. The text button is displayed
 in portrait mode and the icon one, in landscape. */
@property (nonnull, nonatomic, strong, readonly) UIButton *cancelTextButton;
@property (nonnull, nonatomic, strong, readonly) UIButton *cancelIconButton;
@property (nonnull, nonatomic, copy) NSString *cancelTextButtonTitle;

/* The cropper control buttons */
@property (nonnull, nonatomic, strong, readonly)  UIButton *rotateCounterclockwiseButton;
@property (nonnull, nonatomic, strong, readonly)  UIButton *resetButton;
@property (nonnull, nonatomic, strong, readonly)  UIButton *clampButton;
@property (nullable, nonatomic, strong, readonly) UIButton *rotateClockwiseButton;

@property (nonnull, nonatomic, readonly) UIButton *rotateButton; // Points to `rotateCounterClockwiseButton`

/* Button feedback handler blocks */
@property (nullable, nonatomic, copy) void (^cancelButtonTapped)(void);
@property (nullable, nonatomic, copy) void (^doneButtonTapped)(void);
@property (nullable, nonatomic, copy) void (^rotateCounterclockwiseButtonTapped)(void);
@property (nullable, nonatomic, copy) void (^rotateClockwiseButtonTapped)(void);
@property (nullable, nonatomic, copy) void (^clampButtonTapped)(void);
@property (nullable, nonatomic, copy) void (^resetButtonTapped)(void);

/* State management for the 'clamp' button */
@property (nonatomic, assign) BOOL clampButtonGlowing;
@property (nonatomic, readonly) CGRect clampButtonFrame;

/* Aspect ratio button visibility settings */
@property (nonatomic, assign) BOOL clampButtonHidden;
@property (nonatomic, assign) BOOL rotateCounterclockwiseButtonHidden;
@property (nonatomic, assign) BOOL rotateClockwiseButtonHidden;
@property (nonatomic, assign) BOOL resetButtonHidden;

/* Enable the reset button */
@property (nonatomic, assign) BOOL resetButtonEnabled;

/* Done button frame for popover controllers */
@property (nonatomic, readonly) CGRect doneButtonFrame;
@end
NS_ASSUME_NONNULL_END
